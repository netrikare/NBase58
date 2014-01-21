#ifndef NBASE58_H_
#define NBASE58_H_

unsigned char * NBase58Encode(unsigned char *in, int inLen, int *outLen);
unsigned char * NBase58Decode(unsigned char *in, int inLen);

#endif /* NBASE58_H_ */
