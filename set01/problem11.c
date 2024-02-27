#include <stdio.h>
struct _complex 
{
    float real;
    float imag;
};
typedef struct _complex complex;
complex input_complex(); 
complex add_complex(complex a, complex b);
void output(complex a, complex b, complex sum);
    

int main()
 {
    complex a, b, result;
    printf("For first complex number:\n");
    a = input_complex();
    printf("\nFor second complex number:\n");
    b = input_complex();

    result = add_complex(a, b);

    output(a, b, result);

    return 0;
}

complex input_complex()
 {
    complex x;
    printf("Enter real part: ");
    scanf("%f", &x.real);
    printf("Enter imaginary part: ");
    scanf("%f", &x.imag);
    return x;
}

complex add_complex(complex a, complex b)
 {
    complex sum;
    sum.real = a.real + b.real;
    sum.imag = a.imag + b.imag;
    return sum;
}

void output(complex a, complex b, complex sum) 
{
    printf("The sum of ");
    printf("%.f + %.fi and %.f + %.fi is %.f + %.fi\n", a.real, a.imag, b.real, b.imag, sum.real, sum.imag);
}
