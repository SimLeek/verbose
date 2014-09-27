#ifndef _VERBOSE_H__
#define _VERBOSE_H__

#include <iostream>
//thanks to http://www.cplusplus.com/forum/beginner/11252/#msg53158 
// for the idea and the show macro
#define VB_ID(var) #var
#define VB_TITLE(title) std::cout << "___"  << #title << "___" << std::endl
#define VB_SHOW(var) std::cout << #var << " : " << (var) << std::endl

template<class a, class n>
void VB_ARRAY(a& arr,const n& size){
	for(int i=0;i<size;i++){
		std::cout << arr[i]<<"\t";
	}
	std::cout << "\n";
}

template<class a, class n>
void VB_ARRAY2D(a& arr,const n& x, const n& y){
	//follows math standard of mxn = m rows and n columns
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			std::cout << arr[i][j]<<"\t";
		}
		std::cout << "\n";
	}
}

template<class a, class n>
void VB_ARRAY3D(a& arr,const n& x, const n& y, const n& z){
	for(int i=0;i<x;i++){
		std::cout << "__ARRAY["<< i << "]__\n";
		for(int j=0;j<x;j++){
			for(int k=0;k<z;k++){
				std::cout<<arr[k][j][i]<<"\t";
			}
			std::cout << "\n";
		}
	}
}



#endif
