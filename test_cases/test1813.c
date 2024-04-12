
#include <stdio.h>
#include <openssl/rsa.h>
#include <openssl/pem.h>

int main() {
    RSA * rsa = RSA_generate_key(2048, RSA_F4, NULL, NULL);
    if (!rsa) {
        fprintf(stderr, "Failed to generate key\n");
        return 1;
    }

    BIO * bio = BIO_new(BIO_s_mem());
    if (PEM_write_bio_RSAPublicKey(bio, rsa) != 1) {
        fprintf(stderr, "Failed to write public key\n");
        return 1;
    }
    
    BUF_MEM * mem = NULL;
    BIO_get_mem_ptr(bio, &mem);
    printf("%s", mem->data);

    RSA_free(rsa);
    BIO_free_all(bio);

    return 0;
}
