let maioridade = 0; 
let menoridade = 999;
let somaidade = 0;
let pessoas = 0;

let qtdMulheres = 0;
let qtdHomens = 0;
let qtdOutros = 0;

let qtdOtimos = 0;
let qtdBons = 0;
let qtdRegulares = 0;
let qtdPessimos = 0;

const totalPessoas = 45; 

do {
    let nome = prompt("Qual é o seu nome?");
    
    // Padroniza o texto do sexo para evitar erros de digitação
    let sexo = prompt("Qual é seu sexo? (feminino, masculino, outros)").toLowerCase().trim();
    
    let idadeStr = prompt("Qual é a sua idade?");
    let idade = Number(idadeStr);
    
    let opiniaoStr = prompt("O que achou do filme?\n(ótimo = 4, bom = 3, regular = 2, péssimo = 1)");
    let opiniao = Number(opiniaoStr);

    if (!isNaN(idade) && idadeStr !== "" && idadeStr !== null &&
        !isNaN(opiniao) && opiniaoStr !== "" && opiniaoStr !== null && opiniao >= 1 && opiniao <= 4) {
        
        somaidade += idade;
        pessoas++; 

        
        if (idade > maioridade) {
            maioridade = idade;
        }
        if (idade < menoridade) {
            menoridade = idade;
        }

        // 2. Classificação por Sexo
        if (sexo === "feminino" || sexo === "mulher" || sexo === "f") {
            qtdMulheres++;
        } else if (sexo === "masculino" || sexo === "homem" || sexo === "m") {
            qtdHomens++;
        } else {
            qtdOutros++;
        }

        if (opiniao === 4) {
            qtdOtimos++;
        } else if (opiniao === 3) {
            qtdBons++;
        } else if (opiniao === 2) {
            qtdRegulares++;
        } else if (opiniao === 1) {
            qtdPessimos++;
        }

    } else {
        alert("Dados inválidos! Por favor, certifique-se de que digitou uma idade correta e uma opinião entre 1 e 4.");
    }

} while (pessoas < totalPessoas);


let medidade = somaidade / totalPessoas;

let totalOtimoBom = qtdOtimos + qtdBons;
let porcentagemOtimoBom = (totalOtimoBom / totalPessoas) * 100;

// Exibição dos resultados finais adaptados
alert("Idade" +
      "\nMédia das idades: " + medidade.toFixed(1) +
      "\nIdade da pessoa mais velha: " + maioridade +
      "\nIdade da pessoa mais nova: " + menoridade);

alert("Sexo" +
      "\nMulheres: " + qtdMulheres +
      "\nHomens: " + qtdHomens +
      "\nOutros: " + qtdOutros);

alert("Opiniões" +
      "\nQuantidade de pessoas que responderam péssimo: " + qtdPessimos +
      "\nPorcentagem de pessoas que responderam ótimo e bom: " + porcentagemOtimoBom.toFixed(1) + "%");
