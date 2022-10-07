#include <iostream>
#include <vector>

class Selection_sort{
public:
    static std::vector<int> selection_sort(std::vector<int> arr)
    {
            for(int i : arr)
            {
                result.push_back(i);
            }
            return result;
    }
private:
    static std::vector<int> result;
};

int main()
{
    std::vector<int> vec = {1,2,3};

    for(int i : Selection_sort::selection_sort(vec))
    {
        std::cout << i << std::endl;
    }
    return 0;
}
