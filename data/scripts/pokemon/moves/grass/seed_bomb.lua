local combat = Combat()
combat:setParameter(COMBAT_PARAM_TYPE, COMBAT_GRASSDAMAGE)
combat:setParameter(COMBAT_PARAM_AGGRESSIVE, true)
combat:setParameter(COMBAT_PARAM_DISTANCEEFFECT, 9)
combat:setParameter(COMBAT_PARAM_POWER, 15)

combat:setCallback(CALLBACK_PARAM_LEVELMAGICVALUE, onGetAttackValues)

local spell = Spell(SPELL_INSTANT)

function spell.onCastSpell(creature, variant, isHotkey)
	combat:execute(creature, variant)
  return true
end

spell:name("Seed Bomb")
spell:words("seed bomb")
spell:id(3)
spell:level(12)
spell:range(8)
spell:cooldown(5000)
spell:needTarget(true)
spell:register()