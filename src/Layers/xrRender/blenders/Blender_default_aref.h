#pragma once

class CBlender_default_aref : public IBlender
{
    xrP_Integer oAREF;
    xrP_BOOL oBlend;

private:
    void CompileFFP(CBlender_Compile& C) const;
    void CompileProgrammable(CBlender_Compile& C) const;

public:
    CBlender_default_aref();
    ~CBlender_default_aref() override = default;

    LPCSTR getComment() override;
    BOOL canBeDetailed() override;
    BOOL canBeLMAPped() override;

    void Save(IWriter& fs) override;
    void Load(IReader& fs, u16 version) override;

    void Compile(CBlender_Compile& C) override;
};
