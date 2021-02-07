#include"complex_no.h"
 /**
  * @brief Complex number using template
  * 
  * @tparam T 
  */
template<typename T>complex_no<T>::complex_no():m_real(0),m_image(0)
{
}
template<typename T>complex_no<T>::complex_no(T a,T b):m_real(a),m_image(b){

}
template <typename T>T complex_no<T>::g_real(){
    return m_real;
    }
template <typename T>T complex_no<T>::g_imag(){
    return m_image;
    }
  template <typename T>void complex_no<T>::g_display(){
      std::cout<<g_real()<<g_imag();
  }