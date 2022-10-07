#include <iostream>
#include <vector>

std::vector<int> test, test2;
class CountingSort{
    private:
        std::vector<int> result;
    public:
        std::vector<int> countingSort(std::vector<int> arr);
        void print(std::vector<int> vec);
};

int main()
{
    test = { 63,25,73,1,98,73,56,84,86,57,16,83,8,25,81,56,9,53,98,67,99,12,83,80,
            91,39,86,76,85,74,39,25,90,59,10,94,32,44,3,89,
            30,27,79,46,96,27,32,18,21,92,69,81,40,40,34,68,78,24,87,42,69,23,41,78,22,6,
            90,99,89,50,30,20,1,43,3,70,95,33,46,44,9,69,48,33,60,65,16,82,67,61,32,21,79,
            75,75,13,87,70,33,1,99
    };

    test2 = {1,1,2,3};

    CountingSort cs;
    cs::print(cs::countingSort(test));

    return 0;
}

CountingSort::std::vector<int> countingSort(std::vector<int> arr)
{
    int arr_size = arr.size();
    for(int i = 0; i < arr_size; i++){ result.push_back(0); }

    for(int number : arr) { if(number != 0) result[number] += 1; }
    return result;
}

CountingSort::void print(std::vector<int> vec)
{
    int i = 0;
    for(int number : vec)
    {
        std::cout << i << " -> "<< number << std::endl;
        i++;
    }
}
