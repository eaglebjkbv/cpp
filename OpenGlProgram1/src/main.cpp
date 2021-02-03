#include <iostream>
#include <GLFW/glfw3.h>

int main()
{
    if(!glfwInit())
        return -1;

    GLFWwindow* window = glfwCreateWindow(800,600,"İlk OpenGL Pencerem",NULL,NULL);


    if(window==NULL)
    {
        std::cout<<"Pencere Olusturulamadi"<<std::endl;

        glfwTerminate();

        return -1;
    }    

    glfwMakeContextCurrent(window);


    while(!glfwWindowShouldClose(window))
    {
        glfwSwapBuffers(window);

        glfwPollEvents();
    }



}
