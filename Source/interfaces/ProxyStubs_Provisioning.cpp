//
// generated automatically from "IProvisioning.h"
//
// implements RPC proxy stubs for:
//   - class ::WPEFramework::Exchange::IProvisioning
//   - class ::WPEFramework::Exchange::IProvisioning::INotification
//

#include "IProvisioning.h"

namespace WPEFramework {

namespace ProxyStubs {

using namespace Exchange;

// -----------------------------------------------------------------
// STUB
// -----------------------------------------------------------------

//
// IProvisioning interface stub definitions
//
// Methods:
//  (0) virtual void Register(IProvisioning::INotification*) = 0
//  (1) virtual void Unregister(IProvisioning::INotification*) = 0
//

ProxyStub::MethodHandler ProvisioningStubMethods[] = {
    // virtual void Register(IProvisioning::INotification*) = 0
    //
    [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {

        RPC::Data::Input& input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        IProvisioning::INotification* param0 = reader.Number<IProvisioning::INotification*>();
        IProvisioning::INotification* param0_proxy = nullptr;
        if (param0 != nullptr) {
            param0_proxy = RPC::Administrator::Instance().ProxyInstance<IProvisioning::INotification>(channel, param0, true);
            ASSERT((param0_proxy != nullptr) && "Failed to get instance of IProvisioning::INotification proxy");
            if (param0_proxy == nullptr) {
                TRACE_L1("Failed to get instance of IProvisioning::INotification proxy");
            }
        }

        if ((param0 == nullptr) || (param0_proxy != nullptr)) {
            // call implementation
            IProvisioning* implementation = input.Implementation<IProvisioning>();
            ASSERT((implementation != nullptr) && "Null IProvisioning implementation pointer");
            implementation->Register(param0_proxy);
        }

        if ((param0_proxy != nullptr) && (RPC::Administrator::Instance().Release(reinterpret_cast<ProxyStub::UnknownProxy*>(param0_proxy), message->Response()) != Core::ERROR_NONE)) {
            TRACE_L1("Warning: IProvisioning::INotification proxy destroyed");
        }
    },

    // virtual void Unregister(IProvisioning::INotification*) = 0
    //
    [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {

        RPC::Data::Input& input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        IProvisioning::INotification* param0 = reader.Number<IProvisioning::INotification*>();
        IProvisioning::INotification* param0_proxy = nullptr;
        if (param0 != nullptr) {
            param0_proxy = RPC::Administrator::Instance().ProxyInstance<IProvisioning::INotification>(channel, param0, true);
            ASSERT((param0_proxy != nullptr) && "Failed to get instance of IProvisioning::INotification proxy");
            if (param0_proxy == nullptr) {
                TRACE_L1("Failed to get instance of IProvisioning::INotification proxy");
            }
        }

        if ((param0 == nullptr) || (param0_proxy != nullptr)) {
            // call implementation
            IProvisioning* implementation = input.Implementation<IProvisioning>();
            ASSERT((implementation != nullptr) && "Null IProvisioning implementation pointer");
            implementation->Unregister(param0_proxy);
        }

        if ((param0_proxy != nullptr) && (RPC::Administrator::Instance().Release(reinterpret_cast<ProxyStub::UnknownProxy*>(param0_proxy), message->Response()) != Core::ERROR_NONE)) {
            TRACE_L1("Warning: IProvisioning::INotification proxy destroyed");
        }
    },

    nullptr
}; // ProvisioningStubMethods[]

//
// IProvisioning::INotification interface stub definitions
//
// Methods:
//  (0) virtual void Provisioned(const string&) = 0
//

ProxyStub::MethodHandler ProvisioningNotificationStubMethods[] = {
    // virtual void Provisioned(const string&) = 0
    //
    [](Core::ProxyType<Core::IPCChannel>& channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage>& message) {

        RPC::Data::Input& input(message->Parameters());

        // read parameters
        RPC::Data::Frame::Reader reader(input.Reader());
        const string param0 = reader.Text();

        // call implementation
        IProvisioning::INotification* implementation = input.Implementation<IProvisioning::INotification>();
        ASSERT((implementation != nullptr) && "Null IProvisioning::INotification implementation pointer");
        implementation->Provisioned(param0);
    },

    nullptr
}; // ProvisioningNotificationStubMethods[]


// -----------------------------------------------------------------
// PROXY
// -----------------------------------------------------------------

//
// IProvisioning interface proxy definitions
//
// Methods:
//  (0) virtual void Register(IProvisioning::INotification*) = 0
//  (1) virtual void Unregister(IProvisioning::INotification*) = 0
//

class ProvisioningProxy final : public ProxyStub::UnknownProxyType<IProvisioning> {
public:
    ProvisioningProxy(const Core::ProxyType<Core::IPCChannel>& channel, void* implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void Register(IProvisioning::INotification* param0) override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<IProvisioning::INotification*>(param0);

        if (Invoke(newMessage) == Core::ERROR_NONE) {
            Complete(newMessage->Response());
        }
    }

    void Unregister(IProvisioning::INotification* param0) override
    {
        IPCMessage newMessage(BaseClass::Message(1));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Number<IProvisioning::INotification*>(param0);

        if (Invoke(newMessage) == Core::ERROR_NONE) {
            Complete(newMessage->Response());
        }
    }
}; // class ProvisioningProxy

//
// IProvisioning::INotification interface proxy definitions
//
// Methods:
//  (0) virtual void Provisioned(const string&) = 0
//

class ProvisioningNotificationProxy final : public ProxyStub::UnknownProxyType<IProvisioning::INotification> {
public:
    ProvisioningNotificationProxy(const Core::ProxyType<Core::IPCChannel>& channel, void* implementation, const bool otherSideInformed)
        : BaseClass(channel, implementation, otherSideInformed)
    {
    }

    void Provisioned(const string& param0) override
    {
        IPCMessage newMessage(BaseClass::Message(0));

        // write parameters
        RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
        writer.Text(param0);

        Invoke(newMessage);
    }
}; // class ProvisioningNotificationProxy


// -----------------------------------------------------------------
// REGISTRATION
// -----------------------------------------------------------------

namespace {

typedef ProxyStub::UnknownStubType<IProvisioning::INotification, ProvisioningNotificationStubMethods> ProvisioningNotificationStub;
typedef ProxyStub::UnknownStubType<IProvisioning, ProvisioningStubMethods> ProvisioningStub;

static class Instantiation {
public:
    Instantiation()
    {
        RPC::Administrator::Instance().Announce<IProvisioning::INotification, ProvisioningNotificationProxy, ProvisioningNotificationStub>();
        RPC::Administrator::Instance().Announce<IProvisioning, ProvisioningProxy, ProvisioningStub>();
    }
} ProxyStubRegistration;

} // namespace

} // namespace WPEFramework

} // namespace ProxyStubs

