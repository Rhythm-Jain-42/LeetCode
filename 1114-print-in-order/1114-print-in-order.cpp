class Foo {
public:
    mutex m1, m2;
    
    
    Foo() {
        m1.lock();
        m2.lock();
    }

    void first(function<void()> printFirst) {
        
        printFirst();
        m1.unlock();
    }

    void second(function<void()> printSecond) {
        m1.lock();
        printSecond();
        m2.unlock();
    }

    void third(function<void()> printThird) {
        m2.lock();
        printThird();
    }
};