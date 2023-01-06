#include "Check.h"
#include "Module.h"

static std::set<std::string> defined_label;
static std::set<std::string> used_label;

void Check::execute()
{
    // TODO write your IR Module checker here.
    for (auto fun : module->get_functions())
    {
        if (fun->get_basic_blocks().empty())
            continue;
        func_ = fun;
        std::vector<std::string> defined_op;
        // CheckOp(func_->get_entry_block(), defined_op);
        for (auto it = used_label.begin(); it != used_label.end(); it++)
        {
            if (defined_label.find(*it) == defined_label.end())
            {
                std::cout << "error not find " << *it << std::endl;
                exit(2);
            }
        }
        CheckLastInst();
        CheckPreAndSuc();
    }
}

void Check::CheckLastInst()
{
    for (auto bb : func_->get_basic_blocks())
    {
        Instruction *last_inst;
        for (auto inst : bb->get_instructions())
        {
            // std::cout << inst->print() << std::endl;
            last_inst = inst;
        }
        if (last_inst->get_instr_type() == Instruction::OpID::br || last_inst->get_instr_type() == Instruction::OpID::ret)
        {
            continue;
        }
        else
        {
            std::cout << "error" << std::endl;
            exit(1);
        }
    }
}

static std::set<BasicBlock *> visited;
// std::map<
void Check::CheckOp(BasicBlock *bb, std::vector<std::string> defined_op)
{
    visited.insert(bb);
    defined_label.insert(bb->get_name());
    for (auto inst : bb->get_instructions())
    {
        auto opnum = inst->get_num_operand();
        auto op = inst->get_operands();
        auto op0 = inst->get_name();

        // add defined_op
        if (!op0.empty() && find(defined_op.begin(), defined_op.end(), op0) == defined_op.end())
            defined_op.push_back(op0);
        else
        {
            if (inst->get_instr_type() == Instruction::OpID::store)
                defined_op.push_back(static_cast<StoreInst *>(inst)->get_lval()->get_name());
        }

        // check if op defined?
        if (inst->get_instr_type() == Instruction::OpID::phi)
        {
            continue;
        }
        for (auto opr : inst->get_operands())
        {
            auto op_name = opr->get_name();
            if (op_name.empty())
                continue;
            // std::cout << opr->get_name() << " ";
            // std::cout << op_name;
            if (op_name.substr(0, 5) == "label")
            {
                if (used_label.find(op_name) == used_label.end())
                    used_label.insert(op_name);
                continue;
            }
            if (find(defined_op.begin(), defined_op.end(), op_name) != defined_op.end())
                continue;
            // if ()
            //     else
            //     {
            //         std::cout << "error:not find " << op_name << std::endl;
            //         exit(2);
            //     }

            // std::cout << print_as_op(opr, false);
            // if (Lookup(opr))
            //     continue;
            // else
            // {
            //     exit(2);
            //     std::cout << "error" << std::endl;
            // }
        }
        std::cout << std::endl;
    }
    for (auto succbb : bb->get_succ_basic_blocks())
    {
        if (visited.find(succbb) != visited.end())
            continue;
        std::cout << succbb->print();
        for (auto inst : succbb->get_instructions())
        {
            if (inst->get_instr_type() == Instruction::OpID::phi)
            {
                static int op_num = 0;
            }
        }
        CheckOp(succbb, defined_op);
    }
}

void Check::CheckPreAndSuc()
{
    for (auto bb : func_->get_basic_blocks())
    {
        static auto succ_bbs_ = bb->get_succ_basic_blocks();
        std::set<std::string> succ_labels;
        for (auto sucbb : succ_bbs_)
        {
            succ_labels.insert(sucbb->get_name());
        }
        auto inst_list = bb->get_instructions();
        auto last_inst = inst_list.back();
        if (last_inst->get_instr_type() == Instruction::OpID::br)
        {
            // labels = last_inst->get_operands();

            for (auto label : last_inst->get_operands())
            {
                auto label_name = label->get_name();
                if (succ_labels.find(label_name) != succ_labels.end())
                    continue;
                else
                {
                    std::cout << "error succ_bbs wrong in " << bb->get_name() << std::endl;
                    exit(3);
                }
            }
        }
    }
}

std::map<std::string, std::vector<std::vector<std::string>>> DefUseChain;
// void Check::CheckDefUseChain()
// {
//     for (auto bb : func_->get_basic_blocks())
//     {
//         std::vector<std::string> defined_op;
//         for (auto inst : bb->get_instructions())
//         {
//             auto def = inst->get_name();
//             defined_op.push_back(def);
//             for (auto opr : inst->get_operands())
//             {
//                 if (find(defined_op.begin(), defined_op.end(), opr->get_name()) != defined_op.end())
//                 {

//                 }
//                 else if ()
//             }
//         }
//         for (auto succbb : bb->get_succ_basic_blocks())
//         {
//             if (visited.find(succbb) != visited.end())
//                 continue;
//             std::cout << succbb->print();
//             CheckOp(succbb, defined_op);
//         }
//     }
// }