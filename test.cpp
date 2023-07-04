#include <gtest/gtest.h>
#include <vector>

// Bubble Sort implementation
void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    bool swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

// Test case for the Bubble Sort algorithm
TEST(BubbleSortTest, SortsArray) {
    std::vector<int> arr = {9, 5, 7, 1, 3};
    std::vector<int> expected = {1, 3, 5, 7, 9};

    bubbleSort(arr);

    EXPECT_EQ(arr, expected);
}

// Run all the tests
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
