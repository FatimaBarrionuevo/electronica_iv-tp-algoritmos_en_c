#include <practico.h>


/**
 * @brief Sumar dos enteros de 32 bit
 * 
 * @param A Primer sumando
 * @param B Segundo sumando
 * @return Resultado de la suma 
 */
int32_t suma(int32_t A,int32_t B)
{
    int32_t suma;
    (void)A;
    (void)B;
    suma=A+B;
    return suma;
}

/**
 * @brief Sumar los números de un arreglo en memoria
 * 
 * @param n Cantidad de números
 * @param b Puntero al primer número
 * @return sumatoria de b[0] hasta b[n-1]
 */
int64_t sumatoria(int32_t n,const int32_t *b)
{
    // reemplazar el código de abajo con la solución
    
    int64_t suma = 0;  // Inicializo el acumulador de 64 bits 
    int64_t i=0; //Inicializo índice
   
    (void)n;
    (void)b;

    while (i < n) {
        suma += b[i];
        i=i+1;
    }
    return suma;
    
}

/**
 * @brief Encuentra la posicion del máximo elemento de un arreglo
 * 
 * @param n Cantidad de números
 * @param b Puntero al primer número
 * @return Posición del mayor número k tal que b[k] <= b[i] para todo i en {0,..,n-1}
 */
int32_t posicion_maximo(int32_t n,const int32_t *b)
{
    (void)n;
    (void)b;
    int32_t max = b[0]; 
    int32_t i; 
    int32_t k;

    i=1;
    k=0;

    while(i < n){
        if(b[i]  > max){
            maximo = b[i];
            k = i;
            i=i+1;
        }
        else{
            i=i+1;
        }
    }

    return k;
}


/**
 * @brief Ordenar un arreglo de menor a mayor en el lugar
 *
 * Luego del llamado a esta función debe cumplirse que
 * b[i]<=b[j] para todo i <= j con i,j en {0,..,n-1}
 *  
 * @param n Cantidad de números
 * @param b Puntero al primer número
 */
void ordenar_en_sitio_menor_a_mayor(int32_t n,int32_t *b)
{
    // reemplazar el código de abajo con la solución
    (void)n;
    (void)b;

 int32_t k;
    int32_t i;
    int32_t x;

    k=n-1;
    while (k>0)
    {
        j=posMax(k+1,b);
        x=b[k];
        b[k]=b[i];
        b[i]=x;
        k=k-1;
    }


}
