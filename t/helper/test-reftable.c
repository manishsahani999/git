#include "reftable/reftable-tests.h"
#include "test-tool.h"

int cmd__reftable(int argc, const char **argv)
{
	block_test_main(argc, argv);
	merged_test_main(argc, argv);
	record_test_main(argc, argv);
	refname_test_main(argc, argv);
	reftable_test_main(argc, argv);
	strbuf_test_main(argc, argv);
	stack_test_main(argc, argv);
	tree_test_main(argc, argv);
	return 0;
}

int cmd__dump_reftable(int argc, const char **argv)
{
	return reftable_dump_main(argc, (char *const *)argv);
}
