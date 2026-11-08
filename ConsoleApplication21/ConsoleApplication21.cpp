#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    //FILE* f = nullptr;
    //FILE* out = nullptr;
    //char buffer[256];

    // Завдання 1
    //fopen_s(&f, "input.txt", "r");
    //if (f) {
    //    fopen_s(&out, "output1.txt", "w");

    //    if (out) {
    //        while (fscanf_s(f, "%255s", buffer, (unsigned)sizeof(buffer)) == 1) {
    //            if (strlen(buffer) >= 7) {
    //                fputs(buffer, out);
    //                fputs(" ", out);
    //            }
    //        }
    //        fclose(out);
    //    }
    //    fclose(f);
    //}

    // Завдання 2
    //fopen_s(&f, "input.txt", "r");
    //if (f) {
    //    fopen_s(&out, "output2.txt", "w");

    //    if (out) {
    //        while (fgets(buffer, 256, f)) {
    //            fputs(buffer, out);
    //        }
    //        fclose(out);
    //    }
    //    fclose(f);
    //}

    // Завдання 3
    //fopen_s(&f, "input.txt", "r");
    //if (f) {
    //    fopen_s(&out, "output3.txt", "w");

    //    if (out) {
    //        char lines[100][256];
    //        int count = 0;

    //        while (count < 100 && fgets(lines[count], 256, f)) {
    //            count++;
    //        }

    //        for (int i = count - 1; i >= 0; i--) {
    //            fputs(lines[i], out);

    //            int len = strlen(lines[i]);
    //            if (i > 0 && len > 0 && lines[i][len - 1] != '\n') {
    //                fputs("\n", out);
    //            }
    //        }
    //        fclose(out);
    //    }
    //    fclose(f);
    //}

    // Завдання 4
    //fopen_s(&f, "input.txt", "r");
    //if (f) {
    //    fopen_s(&out, "output4.txt", "w");

    //    if (out) {
    //        char lines[100][256];
    //        int count = 0;
    //        int pos = -1;

    //        while (count < 100 && fgets(lines[count], 256, f)) {
    //            if (strchr(lines[count], ' ') == nullptr) {
    //                pos = count;
    //            }
    //            count++;
    //        }

    //        for (int i = 0; i < count; i++) {
    //            fputs(lines[i], out);

    //            if (i == pos) {
    //                int len = strlen(lines[i]);

    //                if (len > 0 && lines[i][len - 1] != '\n') {
    //                    fputs("\n", out);
    //                }

    //                fputs("------------\n", out);
    //            }
    //        }

    //        if (pos == -1) {
    //            if (count > 0) {
    //                int len = strlen(lines[count - 1]);

    //                if (len > 0 && lines[count - 1][len - 1] != '\n') {
    //                    fputs("\n", out);
    //                }
    //            }
    //            fputs("------------\n", out);
    //        }

    //        fclose(out);
    //    }
    //    fclose(f);
    //}
    //return 0;
}