
#include <thread>
#include <mutex>

int main() {
    std::mutex m;
    int count = 0;
    
    // Create threads
    std::thread t1([&m, &count](){
        for (int i=0; i<5; ++i) { 
            std::lock_guard<std::mutex> lock(m); // Use scoped lockable attributes
            ++count; 
        }
    });
    
    std::thread t2([&m, &count](){
        for (int i=0; i<5; ++i) {
            std::lock_guard<std::mutex> lock(m); // Use scoped lockable attributes
            ++count; 
        }
    });
    
    t1.join();
    t2.join();
    
    printf("Count: %d\n", count); // Expected output is "Count: 10"
    
    return 0;
}
