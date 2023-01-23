#pragma once
#include "imgui.h"
#include "IGUI.h"
#include <d3d11.h>
#include <memory>
#include <queue>
#include <string>
#include <tchar.h>
#include <unordered_map>
#include <vector>

#include "GUI_Engine_API_Defines.h"
class DialogBoxBase;

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

class GuiEngine : public IGUI
{
public:
	GUI_ENGINE_API GuiEngine();
	GUI_ENGINE_API ~GuiEngine() override = default;
	GUI_ENGINE_API void Run() override;
	GUI_ENGINE_API bool ShutDown() const override;
	GUI_ENGINE_API void CreateGuiWindow();
	GUI_ENGINE_API void AddDialogBox(int id, std::shared_ptr<DialogBoxBase> dialogBox);
	GUI_ENGINE_API void SetCurrentDialog(int newCurrentDialog) override;

	GUI_ENGINE_API void StartDialog(std::string title) override;
	GUI_ENGINE_API void DisplayTextDialog(std::vector<std::string> const & text) override;
	
	GUI_ENGINE_API void SetDialogPosition(Point point) override;
	GUI_ENGINE_API void SetDialogSize(int width, int height) override;
	GUI_ENGINE_API void SetWindowColor(Color color) override;
	GUI_ENGINE_API void SetTextColor(Color color) override;
	GUI_ENGINE_API void SetStartingDialog(int startingId) override;

protected:
	void Internal_CreateWindow();
	bool InitializeDirect3D() const;
	bool Internal_ShowWindow() const;
	void SetupImGuiContext();
	void SetupImGuiStyle() const;
	bool SetupImGuiPlatform() const;
	static bool SetupImGuiRenderer();
	bool LoadFont() const;
	void SetState();
	void RunMainLoop();
	bool Internal_ShutDown() const;
	void ShowFrameCounterWindow();
	void ShowDialogBox(const std::shared_ptr<DialogBoxBase>& dialogBox);

	// Data
	static ID3D11Device*            s_pd3dDevice;
	static ID3D11DeviceContext*     s_pd3dDeviceContext;
	static IDXGISwapChain*          s_pSwapChain;
	static ID3D11RenderTargetView*  s_mainRenderTargetView;
	
	// helper functions
	static bool CreateDeviceD3D(HWND hWnd);
	static void CleanupDeviceD3D();
	static void CreateRenderTarget();
	static void CleanupRenderTarget();
	static LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

	HWND m_hwnd{};
	WNDCLASSEX m_wc{};
	ImGuiIO* m_io{ nullptr };
	ImVec4 m_clear_color{1.0f, 0.0f, 1.0f, 1.00f};
	bool m_bDone{ false };
	bool m_bShow_demo_window{false};
	bool m_bShow_another_window{false};

	std::unordered_map<int, std::shared_ptr<DialogBoxBase>> m_dialogBoxes{};
	int m_iCurrentDialogBox{-1};
};

ID3D11Device* GuiEngine::s_pd3dDevice = nullptr;
ID3D11DeviceContext* GuiEngine::s_pd3dDeviceContext = nullptr;
IDXGISwapChain* GuiEngine::s_pSwapChain = nullptr;
ID3D11RenderTargetView* GuiEngine::s_mainRenderTargetView = nullptr;