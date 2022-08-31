#include <GLFW/glfw3.h>

int end(int code) {
    glfwTerminate();
    return code;
};

int main(void) {
    GLFWwindow* window;

    if (!glfwInit()) return -1;

    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window) return end(-1);

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    return end(0);
}