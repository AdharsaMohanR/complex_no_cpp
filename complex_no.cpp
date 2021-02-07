/**
 * @file complex_no.cpp
 * @author Adharsa Mohan R
 * @brief 
 * @version 0.1
 * @date 2021-02-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"complex_no.h"
#include "iostream"
/**
 * @brief Empty constructor
 * 
 * @tparam T 
 */
template<typename T>complex_no<T>::complex_no():m_real(0),m_image(0)
{
}
/**
 * @brief Parameterized Constructor
 * 
 * @tparam T 
 * @param a 
 * @param b 
 */
template<typename T>complex_no<T>::complex_no(T a,T b):m_real(a),m_image(b)
{

}
/**
 * @brief g_real Function
 * 
 * @tparam T 
 * @return T 
 */
template <typename T>T complex_no<T>::g_real()
{
    return m_real;
}
/**
 * @brief g_imag function
 * 
 * @tparam T 
 * @return T 
 */
template <typename T>T complex_no<T>::g_imag()
{
    return m_image;
}
/**
 * @brief Display Function
 * 
 * @tparam T 
 */
  template <typename T>void complex_no<T>::g_display(){
      std::cout<<g_real()<<g_imag();
  }