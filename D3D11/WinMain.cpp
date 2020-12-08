#include<Windows.h>
int CALLBACK WinMain(
    _In_  HINSTANCE hInstance,
    _In_  HINSTANCE hPrevInstance,
    _In_  LPSTR lpCmdLine,
    _In_  int nCmdShow
)
{
    const auto pClassName = L"D3D";
    WNDCLASSEX wc = { 0 };
    wc.cbSize = sizeof(wc);
    wc.hbrBackground = NULL;
    wc.hInstance = hInstance;
    wc.cbClsExtra = 0;
    wc.cbWndExtra = 0;
    wc.hCursor = nullptr;
    wc.hIcon = nullptr;
    wc.hbrBackground = nullptr;
    wc.lpszMenuName = nullptr;
    wc.hIconSm = nullptr;
    wc.style = CS_OWNDC;
    wc.lpfnWndProc = DefWindowProc;
    wc.lpszClassName = pClassName;

    RegisterClassEx(&wc);

    HWND hwnd = CreateWindowEx(
        0, pClassName, L"First Window",
        WS_MINIMIZEBOX | WS_CAPTION | WS_SYSMENU, 200, 200, 640, 480,
        nullptr, nullptr, hInstance, nullptr);
    ShowWindow(hwnd, SW_SHOW);
    while (true);
    return 0;
}