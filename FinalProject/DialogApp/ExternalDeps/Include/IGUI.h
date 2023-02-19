#pragma once
#include <string>
#include <vector>

#include "GUI_Engine_API_Defines.h"

class IGUI
{
public:
	struct GUI_ENGINE_API Color
	{
		float r{};
		float g{};
		float b{};
		float a{};
	};

	struct GUI_ENGINE_API Point
	{
		int x{};
		int y{};
	};


	GUI_ENGINE_API virtual ~IGUI() = default;
	GUI_ENGINE_API virtual void SetStartingDialog(int startingId) = 0;
	GUI_ENGINE_API virtual void StartDialog(std::string title) = 0;
	GUI_ENGINE_API virtual void DisplayTextDialog(std::vector<std::string> const & text) = 0;
	GUI_ENGINE_API virtual void SetCurrentDialog(int newCurrentDialog) = 0;
	GUI_ENGINE_API virtual void SetDialogPosition(Point point) = 0;
	GUI_ENGINE_API virtual void SetDialogSize(int width, int height) = 0;
	GUI_ENGINE_API virtual void SetWindowColor(Color color) = 0;
	GUI_ENGINE_API virtual void SetTextColor(Color color) = 0;
	GUI_ENGINE_API virtual void Run() = 0;
	GUI_ENGINE_API virtual bool ShutDown() const = 0;

protected:
	void EndDialog();
	void StartWindowColor() const;
	void EndWindowColor();
	void StartTextColor();
	void EndTextColor();
	Color m_windowColor{1.0f, 0.0f, 0.5f, 1.0f};
	Color m_textColor{ 1.0f, 1.0f, 1.0f, 1.0f };
};
