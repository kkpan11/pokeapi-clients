# coding: utf-8

from typing import ClassVar, Dict, List, Tuple  # noqa: F401



class BaseEncounterConditionApi:
    subclasses: ClassVar[Tuple] = ()

    def __init_subclass__(cls, **kwargs):
        super().__init_subclass__(**kwargs)
        BaseEncounterConditionApi.subclasses = BaseEncounterConditionApi.subclasses + (cls,)
    async def encounter_condition_list(
        self,
        limit: int,
        offset: int,
    ) -> str:
        ...


    async def encounter_condition_read(
        self,
        id: int,
    ) -> str:
        ...
