#include <iostream>
#include <sstream>

class IReader {
public:
    IReader() = default;
    virtual std::string read(const std::string&) = 0;
};

class IWriter {
public:
    IWriter() = default;
    virtual void write(const std::string& data) = 0;
};

class Parser {
private:
    int a = 0;
    int b = 0;
    int c = 0;
    IReader* readerStrategy;

public:
    void setReaderStrategy(IReader* strategy) {
        readerStrategy = strategy;
    }

    void reader(const std::string& Str) {
        std::string data = readerStrategy->read(Str);


        int N = data.size();
        int i = 0;
        while (data[i] != ';') {
            a = a * 10 * (i != 0) + (int)data[i] - 48;
            i++;
        }
        i++;
        while (data[i] != ';') {
            b = b * 10 * (i != 0) + (int)data[i] - 48;
            i++;
        }
        i++;
        while (data[i] != ';') {
            c = c * 10 * (i != 0) + (int)data[i] - 48;
            i++;
        }
    }

    int get_a() const { return a; }
    int get_b() const { return b; }
    int get_c() const { return c; }
};

class FileReader : public IReader {
public:
    FileReader() {
        std::cout << "File Reader Init" << std::endl;
    }

    std::string read(const std::string& file) override {
        std::cout << "Reading from file: " << file << std::endl;
        return file;
    }
};

class UARTReader : public IReader {
public:
    UARTReader() {
        std::cout << "UART Reader Init" << std::endl;
    }

    std::string read(const std::string& UART) override {
        std::cout << "Reading from UART: " << UART << std::endl;
        return UART;
    }
};

class USBReader : public IReader {
public:
    USBReader() {
        std::cout << "USB Reader Init" << std::endl;
    }

    std::string read(const std::string& USB) override {
        std::cout << "Reading from USB: " << USB << std::endl;
        return USB;
    }
};

class FileWriter : public IWriter {
public:
    FileWriter() {
        std::cout << "File Writer Init" << std::endl;
    }

    void write(const std::string& data) override {
        std::cout << "Writing to file: " << data << std::endl;
    }
};

class UARTWriter : public IWriter {
public:
    UARTWriter() {
        std::cout << "UART Writer Init" << std::endl;
    }

    void write(const std::string& data) override {
        std::cout << "Writing to UART: " << data << std::endl;
    }
};

class USBWriter : public IWriter {
public:
    USBWriter() {
        std::cout << "USB Writer Init" << std::endl;
    }

    void write(const std::string& data) override {
        std::cout << "Writing to USB: " << data << std::endl;
    }
};

int main() {
    std::string MESSAGEFILE = "123;456;789;";
    std::string MESSAGEUART = "D some errors...";
    std::string MESSAGEUSB = "123;456;789;";

    UARTReader UART;
    FileReader File;
    Parser P;

    P.setReaderStrategy(&File);

    P.reader(MESSAGEFILE);
    UART.read(MESSAGEUART);

    std::cout << "a = " << P.get_a() << " b = " << P.get_b() << " c = " << P.get_c() << std::endl;

    USBWriter USB;
    USB.write(std::to_string(P.get_a()));

    return 0;
}
