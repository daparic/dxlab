#include <stdio.h>
#include <stdlib.h>

#include <mm_malloc.h>
#include <xmmintrin.h> // SSE intrinsics

#if 0
void testfunc2() {
    float* data = (float*)malloc(1024 * sizeof(float));  // 16-byte alignment for SSE
    if (!data) {
        printf("// handle allocation failure\n");
    }
    
    // free(data);  
}
#endif

void testfunc() {
    float* data = (float*)_mm_malloc(1024 * sizeof(float), 16);  // 16-byte alignment for SSE
    if (!data) {
        printf("// handle allocation failure\n");
    }
    
    // Use SIMD instructions on data...
    
    // _mm_free(data);  // must use _mm_free, not free()
}

int main(int argc, char* argv[])
{
    testfunc();
    printf("-oOo-");

    return 0;
}
