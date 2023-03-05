#pragma once 
#include <Slate_Structs.h>
 
 
 
class UEditableTextBoxWidgetStyle
{
public:
	UEditableTextBoxWidgetStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEditableTextBoxStyle GetEditableTextBoxStyle() {
		return memory.read<struct FEditableTextBoxStyle>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UButtonWidgetStyle
{
public:
	UButtonWidgetStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FButtonStyle GetButtonStyle() {
		return memory.read<struct FButtonStyle>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCheckBoxWidgetStyle
{
public:
	UCheckBoxWidgetStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCheckBoxStyle GetCheckBoxStyle() {
		return memory.read<struct FCheckBoxStyle>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UProgressWidgetStyle
{
public:
	UProgressWidgetStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FProgressBarStyle GetProgressBarStyle() {
		return memory.read<struct FProgressBarStyle>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEditableTextWidgetStyle
{
public:
	UEditableTextWidgetStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEditableTextStyle GetEditableTextStyle() {
		return memory.read<struct FEditableTextStyle>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UComboBoxWidgetStyle
{
public:
	UComboBoxWidgetStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FComboBoxStyle GetComboBoxStyle() {
		return memory.read<struct FComboBoxStyle>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class USlateSettings
{
public:
	USlateSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbExplicitCanvasChildZOrder() {
		return memory.read<bool>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UScrollBarWidgetStyle
{
public:
	UScrollBarWidgetStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FScrollBarStyle GetScrollBarStyle() {
		return memory.read<struct FScrollBarStyle>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UComboButtonWidgetStyle
{
public:
	UComboButtonWidgetStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FComboButtonStyle GetComboButtonStyle() {
		return memory.read<struct FComboButtonStyle>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UScrollBoxWidgetStyle
{
public:
	UScrollBoxWidgetStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FScrollBoxStyle GetScrollBoxStyle() {
		return memory.read<struct FScrollBoxStyle>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class USpinBoxWidgetStyle
{
public:
	USpinBoxWidgetStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSpinBoxStyle GetSpinBoxStyle() {
		return memory.read<struct FSpinBoxStyle>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTextBlockWidgetStyle
{
public:
	UTextBlockWidgetStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTextBlockStyle GetTextBlockStyle() {
		return memory.read<struct FTextBlockStyle>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UToolMenuBase
{
public:
	UToolMenuBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


