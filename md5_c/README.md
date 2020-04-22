file-or-string-md5 - C
================================

Compute md5 value of file or string.

Try the following:

$ gcc main_md5.c md5.c -Wall -o md5_test

$ ./md5_test

// you may get following:

	[file - README.md] md5 value:
	
	a9a51158d0e7b5dd630a0a6697905356
	
	[string - pumpkinn@gmail.com] md5 value:
	
	f985f0a0742ea5dc50e4b865604be741

// and you can check by md5sum

$ md5sum README.md

a9a51158d0e7b5dd630a0a6697905356  README.md

// Last: 16-digit md5 is the middle of 32-digit md5

