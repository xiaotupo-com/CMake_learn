class BufferedOutput {
public:
    static short BytesWritten() {
        return bytecount;
    }

    static void ResetCount() {
        bytecount = 0;
    }

    static void CountINC() {
        bytecount++;
    }
    static long bytecount;
};

long BufferedOutput::bytecount;