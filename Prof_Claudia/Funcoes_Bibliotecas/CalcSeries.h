#include<iostream>
using namespace std;
float result=1;
float denominador= 3;
float result1=7;
float result3=1;
float numerador = 2;

//======Declaração de Funções=============================================
float calcTermos(float termos){
	for (int i=2;i<=termos;i++) 
  { 
    result = result + (1/denominador);
    denominador*=3;// neste caso o denominador deve ser uma nova variável
      
   }
   cout<<"\n O result é: "<<result;
}//=====Fim dessa Função=================================================
//========================================================================
float calcTermos2(float termos){
	for (int i=2;i<=termos;i++) 
  	{ 
      result1 = result1 + (7/denominador);
      denominador*=3;// neste caso o denominador deve ser uma nova variável
   }
   cout<<"\n O resultado é: "<<result1;
}//===Fim dessa Função2=====================================================
//=========================================================================
float calcTermos3(float termos){
	for (int i=2;i<=termos;i++) 
  	{ 
      result3 = result3 + (numerador/denominador);
      denominador*=3;// neste caso o denominador deve ser uma nova variável
      numerador *=2;
  }
   cout<<"\n O resultado é: "<<result3;
}//====Fim dessa Função3========================================================
//===============================================================================
float calcTermos4(float termos){
	for (int i=2;i<=termos;i++) 
  { 
      result = (result + (numerador/denominador)*-1);
      denominador*=3;// neste caso o denominador deve ser uma nova variável
      numerador *=2;
   }
   cout<<"\n O resultado é: "<<result;
}
//==Fim dessa Função 4=========================================================











