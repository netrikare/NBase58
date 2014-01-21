#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "NBase58.h"

void test(char *indec, char* inenc){
	int inLen = strlen(indec);

	int outLen;
	unsigned char *enc = NBase58Encode(indec, inLen, &outLen);
	unsigned char *dec = NBase58Decode(enc, outLen);
	printf("ENC_TEST: %d DEC_TEST %d INDEC: %s INENC: %s ENC: %s DEC: %s\n", !strcmp(inenc, enc), !strcmp(indec, dec), indec, inenc, enc, dec);

	free(enc);
	free(dec);
}

int main(){

	test("26sHB9WRN", "e55Gg97WpEEZ");
	test("5JTzFTSfF27cqHqy1HcqxWGhdso9JCykPEbTiwfraNN74v1yxvk", "3u6FbeX2ohutxSA2qmbie7GQ87bnf2zsPeXq7PaxVpbthnvR6DL8FaiGnzSMjUGr3MsEee");
	test("ABC", "NvLz");
	test("A", "28");
}
