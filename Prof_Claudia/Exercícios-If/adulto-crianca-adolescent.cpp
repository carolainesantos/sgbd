in�cio {
    inteiro: idade;
    leia("Idade", idade);

    caractere: categoria;
    
    se (idade < 0) {
        categoria = "Idade inv�lida";
    } sen�o se (idade < 13) {
        categoria = "Crian�a";
    } sen�o se (idade < 18) {
        categoria = "Adolescente";
    } sen�o {
        categoria = "Adulto";
    }
    
    escreva(categoria);
}
