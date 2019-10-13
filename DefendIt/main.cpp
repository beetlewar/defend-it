#include <iostream>
#include "Application.h"

int main()
{
    Application app;

    try
    {
        app.run();
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;

    // glfwInit();
    // glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    // auto window = glfwCreateWindow(800, 600, "Vulkan window", nullptr, nullptr);
    //
    // uint32_t extensionCount = 0;
    // vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);
    //
    // std::cout << extensionCount << " extensions supported" << std::endl;
    //
    // glm::mat4 matrix;
    // glm::vec4 vec;
    // auto test = matrix * vec;
    //
    // while (!glfwWindowShouldClose(window)) {
    //     glfwPollEvents();
    // }
    //
    // glfwDestroyWindow(window);
    //
    // glfwTerminate();
    //
    // return 0;
}
