// C Compatibility Headers
#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfenv>
#include <cfloat>
#include <cinttypes>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cuchar>
#include <cwchar>
#include <cwctype>
 
// Containers
#include <array>
#include <deque>
#include <forward_list>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <span >
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <vector>
 
// Utilities & Math
#include <algorithm>
#include <bit>
#include <bitset>
#include <complex>
#include <concepts>
#include <execution>
#include <expected>
#include <functional>
#include <initializer_list>
#include <iterator>
#include <limits>
#include <memory>
#include <memory_resource>
#include <numbers>
#include <numeric>
#include <optional>
#include <random>
#include <ranges>
#include <ratio>
#include <scoped_allocator>
#include <source_location>
#include <tuple>
#include <type_traits>
#include <typeindex>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <variant>
#include <version>
 
// Strings & I/O
#include <filesystem>
#include <format>
#include <fstream>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <ostream>
#include <print>
#include <sstream>
#include <streambuf>
#include <string>
#include <string_view>
#include <syncstream>
 
// Concurrency & Threading
#include <atomic>
#include <barrier>
#include <condition_variable>
#include <future>
#include <latch>
#include <mutex>
#include <semaphore>
#include <shared_mutex>
#include <stop_token>
#include <thread>
using namespace std;
 
int main() {
    int matt;
    for (int row=1; row<=5; row++) {
        for(int col=1;col<=5; col++) {
            cin>>matt;
            if (matt==1) {
                cout<<abs(row-3) + abs(col-3)<<'\n';
                return 0;
            }
        }
    }
}