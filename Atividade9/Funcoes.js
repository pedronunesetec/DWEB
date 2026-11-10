
function encontrarMaior(a, b, c) {
    return Math.max(a, b, c);
}


function ordenarTresNumeros(a, b, c) {
    return [a, b, c].sort((x, y) => x - y);
}


function verificarPalindromo(str) {
    const formatada = str.replace(/\s+/g, '').toLowerCase();
    const invertida = formatada.split('').reverse().join('');
    return formatada === invertida;
}


function ehPar(numero) {
    return numero % 2 === 0;
}


function calcularMedia(a, b, c) {
    return (a + b + c) / 3;
}


function dispararMaior() {
    const n1 = Number(document.getElementById('m1').value);
    const n2 = Number(document.getElementById('m2').value);
    const n3 = Number(document.getElementById('m3').value);
    const r = encontrarMaior(n1, n2, n3);
    alert('O maior número é: ' + r);
}

function dispararOrdenar() {
    const n1 = Number(document.getElementById('o1').value);
    const n2 = Number(document.getElementById('o2').value);
    const n3 = Number(document.getElementById('o3').value);
    const r = ordenarTresNumeros(n1, n2, n3);
    alert('Ordem crescente: ' + r.join(', '));
}

function dispararPalindromo() {
    const texto = document.getElementById('palavra').value;
    const r = verificarPalindromo(texto);
    alert(r ? 'É um palíndromo! 🎉' : 'Não é um palíndromo. ❌');
}

function dispararPar() {
    const n = Number(document.getElementById('numPar').value);
    const r = ehPar(n);
    alert(r ? 'O número é PAR ✅' : 'O número é ÍMPAR ❌');
}

function dispararMedia() {
    const n1 = Number(document.getElementById('med1').value);
    const n2 = Number(document.getElementById('med2').value);
    const n3 = Number(document.getElementById('med3').value);
    const r = calcularMedia(n1, n2, n3);
    alert('A média é: ' + r.toFixed(2));
}