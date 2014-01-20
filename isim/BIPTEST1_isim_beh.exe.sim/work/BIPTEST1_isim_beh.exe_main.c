/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003109486978_1733832700_init();
    work_m_00000000001390081081_0444875697_init();
    work_m_00000000001396437439_2058220583_init();
    work_m_00000000003558900774_4207565011_init();
    work_m_00000000000730013298_1377517556_init();
    work_m_00000000002182794099_3406982734_init();
    work_m_00000000001657833808_3916779816_init();
    work_m_00000000000826455979_0886308060_init();
    work_m_00000000003432774675_1292031434_init();
    work_m_00000000002585210856_3508565487_init();
    work_m_00000000001150630398_1326243412_init();
    work_m_00000000002436924979_4137616534_init();
    work_m_00000000001911108315_1955534286_init();
    work_m_00000000004177856458_3857330175_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000004177856458_3857330175");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
