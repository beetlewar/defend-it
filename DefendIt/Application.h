#pragma once
#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>

class Application
{
    VkInstance instance_ = nullptr;
    GLFWwindow* window_ = nullptr;

public:
    void run();

private:
    void initVulkan();

    void createInstance();

    void mainLoop();

    void cleanup();
};
