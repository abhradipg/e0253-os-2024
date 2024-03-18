#include "utils.h"

int main(int argc, char *argv[])
{
	int perf_testcase1, perf_testcase2;
	init_params(argc, argv);
	perf_testcase1 = run_testcase1();
	printf("Testcase1 throughput:%15d\n", perf_testcase1);
    perf_testcase1 = run_testcase2();
	printf("Testcase2 throughput:%15d\n", perf_testcase2);
	run_testcase3();
        return 0;
}