<!DOCTYPE html>
<html lang=" pt-br">
   <head>
        <meta charset="TF-8">
        <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Exemplo</title>
        <script>
            function validar(){
                var nota1, nota2, nota3, nota4;
                var mediaAluno;

                nota1=parseFloat(prompt("Nota 1: "));
                nota2=parseFloat(prompt("Nota 2: "));
                nota3=parseFloat(prompt("Nota 3: "));
                nota4=parseFloat(prompt("Nota 4: "));

                mediaAluno=((nota1 + nota2 + nota3 + nota4) /4);
                var msg= "Sua média é:" + mediaAluno + "\n";

                // menor que 0
                if(mediaAluno < 0 || mediaAluno > 10){
                    alert("\nMedia inexistente " + mediaAluno);
                // verificar do 7 ao 10
                } else if(mediaAluno >=7) {
                    alert(msg + "Aprovado!!");
                // verificar do 5 ao 6.9
                } else if(mediaAluno >=5) {
                    alert(msg + "Recuperação");
                // resto = reprovado 0 a 4.9
                } else {
                    alert(msg + "Reprovado");
                }
