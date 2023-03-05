#pragma once 
#include <WebBrowserWidget_Structs.h>
 
 
 
//Class WebBrowserWidget.WebBrowser Size 336
// Inherited 264 bytes 
class UWebBrowser : public UWidget
{

 public: 
	struct FMulticastInlineDelegate OnUrlChanged;  // Offset: 264 Size: 16
	struct FMulticastInlineDelegate OnBeforePopup;  // Offset: 280 Size: 16
	struct FString InitialURL;  // Offset: 296 Size: 16
	char pad_312_1 : 7;  // Offset: 312 Size: 1
	bool bSupportsTransparency : 1;  // Offset: 312 Size: 1
	char pad_313[23];  // Offset: 313 Size: 23



 // Functions 
 public:
	void OnUrlChanged__DelegateSignature(struct FText& Text); // DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
	void OnBeforePopup__DelegateSignature(struct FString URL, struct FString Frame); // DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature
	void LoadURL(struct FString NewURL); // Function WebBrowserWidget.WebBrowser.LoadURL
	void LoadString(struct FString contents, struct FString DummyURL); // Function WebBrowserWidget.WebBrowser.LoadString
	struct FString GetUrl(); // Function WebBrowserWidget.WebBrowser.GetUrl
	struct FText GetTitleText(); // Function WebBrowserWidget.WebBrowser.GetTitleText
	void ExecuteJavascript(struct FString ScriptText); // Function WebBrowserWidget.WebBrowser.ExecuteJavascript
}; 
 
 


//Class WebBrowserWidget.WebBrowserAssetManager Size 120
// Inherited 40 bytes 
class UWebBrowserAssetManager : public UObject
{

 public: 
	struct TSoftObjectPtr<UMaterial> DefaultMaterial;  // Offset: 40 Size: 40
	char pad_80[40];  // Offset: 80 Size: 40



 // Functions 
 public:
}; 
 
 


