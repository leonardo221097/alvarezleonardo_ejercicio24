#include <iostream>
#include <cmath>
#include <random>
#include <stdlib.h>

int main(){
  int i;
  float N=1000;
  float sigma=1.0;
  float delta=3.0 ;
  float random=0.0;
	float propuesta;
	float y;
	float r;
	float alpha;
	
  
	
  
  srand48(8);
	random=drand48();
	

  for (i=0;i<1000;i++){  
	
    propuesta==(random-i)+(drand48()-0.5)*delta;
	 y==(exp(-propuesta*propuesta/(2.0*sigma*sigma))/sqrt(2.0*M_PI*sigma*sigma))/exp(-(random-i)*(random-i)/(2.0*sigma*sigma))/sqrt(2.0*M_PI*sigma*sigma);
	alpha=drand48();
		 if (alpha<r)
		 {
		 std::cout << propuesta << std::endl;	 
		 }
	else 
	{
	std::cout << random-i<< std::endl;	
	}
	 
	
   
  }
  
  return 0;
}


