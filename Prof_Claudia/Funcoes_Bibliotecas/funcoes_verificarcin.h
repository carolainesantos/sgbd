#include<iostream>
using namespace std;

//=============================
//função para verificar numeros informados
//=============================

    //============ inicio verificar exercicio 1
	float verificarNum1(float qtdeRacao)
	{	
	do{
		if(qtdeRacao<=0)
		{
		cout<<"\n Digite uma quantidade de ração válida: \n";
		cin>>qtdeRacao;
	    }
	    
	  }while(qtdeRacao<=0);
	return(qtdeRacao);
	} 
	//============ fim verificar exercicio 1
	
	//====================================
	
    //============ inicio verificar exercicio 2
	float verificarNum2(float qtdeTorneira)     
	{
	do{
		if(qtdeTorneira<=0)
		{
		cout<<"\n Digite uma quantidade de torneiras válida: \n";
		cin>>qtdeTorneira;
		}
		
	  }while(qtdeTorneira<=0);
    return(qtdeTorneira);
	}
	//============ fim verificar exercicio 2
	
		//====================================
		
	//============ inicio verificar exercicio 3
	float verificarNum3(float qtdeFunc)  
	{
		
	do{
		if(qtdeFunc<=0)
		{
		cout<<"\n Digite uma quantidade de funcionários válida: \n";
		cin>>qtdeFunc;
		}
	  }while(qtdeFunc<=0);
    return(qtdeFunc);
	}
    
    float verificarNum3Parte2(float horasTrab) 
	 {
	 	
	  do{
		if(horasTrab<=0)
		{
		cout<<"\n Digite uma quantidade de horas válida: \n";
		cin>>horasTrab;
		}
		
	  }while(horasTrab<=0);
     return(horasTrab);
	 }
	//============ fim verificar exercicio 3
	  
	//==============================================
	  
	//============ inicio verificar exercicio 4
  float verificarNum4(float qtdeTempo)  
	{
		
	do{
		if(qtdeTempo<=0)
		{
		cout<<"\n Digite uma quantidade de tempo válida: \n";
		cin>>qtdeTempo;
		}
	  }while(qtdeTempo<=0);
    return(qtdeTempo);
	}
	
    //===========================
    
    float verificarNum4Parte1(float qtdeLinhas) 
	 {
	 	
	  do{
		if(qtdeLinhas<=0)
		{
		cout<<"\n Digite uma quantidade de linhas válida: \n";
		cin>>qtdeLinhas;
		}
		
	  }while(qtdeLinhas<=0);
     return(qtdeLinhas);
	 }
	 
     //==========================
     
     float verificarNum4Parte2(float qtdeLinhas2) 
	 {
	 	
	  do{
		if(qtdeLinhas2<=0)
		{
		cout<<"\n Digite uma quantidade de linhas válida: \n";
		cin>>qtdeLinhas2;
		}
		
	  }while(qtdeLinhas2<=0);
     return(qtdeLinhas2);
	 }
     
	//============ fim verificar exercicio 4
	
	//==============================================
	
	//============ inicio verificar exercicio 5
	
	 float verificarNum5(float kmPorLitro) 
	{
	
	do{
		if(kmPorLitro<=0)
		{
		cout<<"\n Digite uma quantidade de Litros de gasolina válida: \n";
		cin>>kmPorLitro;
		}
	  }while(kmPorLitro<=0);
	return(kmPorLitro);   
    }
    
    float verificarNum5Parte1(float qtdeKm) 
	 {
	 	
	  do{
		if(qtdeKm<=0)
		{
		cout<<"\n Digite uma quantidade de linhas válida: \n";
		cin>>qtdeKm;
		}
		
	  }while(qtdeKm<=0);
     return(qtdeKm);
	 }

	//============ fim verificar exercicio 5