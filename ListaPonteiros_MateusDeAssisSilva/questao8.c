/*


int mat[4], *p, x;

p = mat + 1;   // v�lido, pois mat se refere a posi��o 0 do vetor,
	      // que pode ser somada a 1 e ir a mat[1]
p = mat++;     // inv�lido, pois se est� somando 1 "unidade de mem�ria" ao valor atual,
               //cuja unidade vale o tamanho em bytes desse tipo
p = ++mat;     // inv�lido.
x = (*mat)++; // v�lido, pois *mat � o primeiro item do vetor, o qual
	      // pode ser somado com 1.

*/
