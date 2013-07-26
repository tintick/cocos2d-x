#ifndef __CC_APPLICATION_PROTOCOL_H__
#define __CC_APPLICATION_PROTOCOL_H__

NS_CC_BEGIN

/**
 * @addtogroup platform
 * @{
 */

class CC_DLL ApplicationProtocol
{
public:

    enum class Platform
    {
        WINDOWS,
        LINUX,
        MACOS,
        ANDROID,
        IPHONE,
        IPAD,
        BLACKBERRY,
        NACL,
        EMSCRIPTEN,
        TIZEN
    };


    virtual ~ApplicationProtocol() {}

    /**
    @brief    Implement Director and Scene init code here.
    @return true    Initialize success, app continue.
    @return false   Initialize failed, app terminate.
    */
    virtual bool applicationDidFinishLaunching() = 0;

    /**
    @brief  The function be called when the application enter background
    @param  the pointer of the application
    */
    virtual void applicationDidEnterBackground() = 0;

    /**
    @brief  The function be called when the application enter foreground
    @param  the pointer of the application
    */
    virtual void applicationWillEnterForeground() = 0;

    /**
    @brief    Callback by Director for limit FPS.
    @interval       The time, expressed in seconds, between current frame and next. 
    */
    virtual void setAnimationInterval(double interval) = 0;

    /**
    @brief Get current language config
    @return Current language config
    */
    virtual LanguageType getCurrentLanguage() = 0;
    
    /**
     @brief Get target platform
     */
    virtual Platform getTargetPlatform() = 0;
};

// end of platform group
/// @}

NS_CC_END

#endif    // __CC_APPLICATION_PROTOCOL_H__
