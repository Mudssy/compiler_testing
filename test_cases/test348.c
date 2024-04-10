
for(int i = 0; i < result.size(); ++i) {
    // check if the type is string (char array) then print as string
    if (result[i] != NULL && strlen((char*)result[i]) > 0) {
        printf("%s ", (char*)result[i]);  // cast the element to char* before passing it to printf
    } else {
        // not a string, print as integer
        printf("%d ", *(int*)result[i]); // casting the void pointer back to int and printing
    }
}
printf("\n");
