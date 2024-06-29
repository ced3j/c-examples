 #include <stdio.h>



 struct Complex{
    double real;
    double imag;
 };


 void printComplex(struct Complex c){
    printf("Complex Number: %.2f + %.2fi\n", c.real, c.imag);
 }  

struct Complex addComplex(struct Complex c1, struct Complex c2){
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
 };

struct Complex diffComplex(struct Complex c1, struct Complex c2){
    struct Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
};



 int main(){
    struct Complex c1 = {3.0, 4.0};
    struct Complex c2 = {1.0, 2.0};

    struct Complex sum = addComplex(c1, c2);
    struct Complex diff = diffComplex(c1, c2);

    printf("First complex Number: ");
    printComplex(c1);


    printf("Second complex number: ");
    printComplex(c2); 

    printf("Sum: ");
    printComplex(addComplex(c1, c2));    
    

    printf("Difference: ");
    printComplex(diffComplex(c1, c2));

    return 0;
 }