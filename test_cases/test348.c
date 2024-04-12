
for(int i = 0; i < result.size(); ++i) {
    if (result[i].t == INT_RESULT)
        printf("%d\n", *((int*)result[i].pData));
}
