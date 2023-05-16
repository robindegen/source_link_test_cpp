#include <thread>

int main(int argc, char* argv[])
{
    // Endless loop because we want to be able to make a dump file to test the pdb paths
    while (1)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}
