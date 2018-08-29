/*


int mat[4], *p, x;

p = mat + 1;   // válido, pois mat se refere a posição 0 do vetor,
	      // que pode ser somada a 1 e ir a mat[1]
p = mat++;     // inválido, pois se está somando 1 "unidade de memória" ao valor atual,
               //cuja unidade vale o tamanho em bytes desse tipo
p = ++mat;     // inválido.
x = (*mat)++; // válido, pois *mat é o primeiro item do vetor, o qual
	      // pode ser somado com 1.

*/
