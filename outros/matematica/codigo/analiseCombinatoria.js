/*

# Permutação Simples

**/

function fatorial(n) {
    if (n === 0) return 1;
        let resultado = 1;
        for (let i = 1; i <= n; i++) {
            resultado *= i;
    }
    return resultado;
}

function permutacaoSimples(n, k) {
    return fatorial(n) / fatorial(n - k);
}

let resultado = permutacaoSimples(5, 3);
console.log("Permutação simples de 5 elementos, escolhendo 3:", resultado);
  

/*

#

**/

function combinacao(n, k) {
    return fatorial(n) / (fatorial(k) * fatorial(n - k));
}
  
let resultadoCombinacao = combinacao(4, 2);
console.log("Combinação de 4 elementos, escolhendo 2:", resultadoCombinacao);
 

/*

#

**/

function permutacoes(arr) {
    if (arr.length === 0) return [];
    if (arr.length === 1) return [arr];
    
    let resultado = [];
    
    for (let i = 0; i < arr.length; i++) {
      let elemento = arr[i];
      let restante = arr.slice(0, i).concat(arr.slice(i + 1));
      let permutacoesRestante = permutacoes(restante);
      for (let perm of permutacoesRestante) {
        resultado.push([elemento].concat(perm));
      }
    }
    
    return resultado;
}

let perm = permutacoes(['a', 'b', 'c']);
console.log("Permutações de ['a', 'b', 'c']: ", perm);  


/*

#

**/

let combinacoesLoteria = combinacao(60, 6);
console.log("Número de combinações possíveis na loteria:", combinacoesLoteria);


/*

#

**/

function fatorial(n) {
    if (n === 0) return 1;
    let resultado = 1;
    for (let i = 1; i <= n; i++) {
      resultado *= i;
    }
    return resultado;
  }
  
function binomial(n, k) {
    return fatorial(n) / (fatorial(k) * fatorial(n - k));
}

console.log(binomial(5, 3)); // Saída: 10
  