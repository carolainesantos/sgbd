in�cio {
    l�gico: tem_passaporte;
    l�gico: tem_residencia_fixa;
    l�gico: tem_antecedentes;
    l�gico: tem_oferta_trabalho;
    
    tem_passaporte = verdadeiro;
    tem_residencia_fixa = verdadeiro;
    tem_antecedentes = verdadeiro;
    tem_oferta_trabalho = verdadeiro;
    
    se (tem_passaporte e tem_residencia_fixa e n�o tem_antecedentes
        ou tem_passaporte e tem_oferta_trabalho
    ) {
        escreva("Visto aprovado!");
    } sen�o {
        escreva("Visto negado!");
    }
}
