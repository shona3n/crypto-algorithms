#include "md5.h"

#include <stdio.h>
#include <string.h>


// // function declare
// int Compute_string_md5(unsigned char *dest_str, unsigned int dest_len, char *md5_str);
// int Compute_file_md5(const char *file_path, char *md5_str);

/************** main test **************/
int main(int argc, char *argv[])
{
	int ret;
	const char *file_path = "README.md";
	char md5_str[MD5_STR_LEN + 1];
	const char *test_str = "pumpkin@gmail.com";

	// test file md5
	ret = ComputeFileMD5(file_path, md5_str);
	if (0 == ret)
	{
		printf("[file - %s] md5 value:\n", file_path);
		printf("%s\n", md5_str);
	}

	// test string md5 
	ComputeStringMD5((unsigned char *)test_str, strlen(test_str), md5_str);
	printf("[string - %s] md5 value:\n", test_str);
	printf("%s\n", md5_str);

	return 0;
}
